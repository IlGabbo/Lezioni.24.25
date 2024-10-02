#!/bin/bash

commitMessage=$1

# Check if the current directory is a git repository
if ! git rev-parse --is-inside-work-tree &>/dev/null; then
  echo "Not a git repository. Please navigate to a git repository."
  exit 1
fi

# Check if there are any commits in the repository
if [ -z "$(git log --oneline 2>/dev/null)" ]; then
  echo "The repository has no commits. Creating an initial commit."
  touch README.md
  git add README.md
  git commit -m "Initial commit"
fi

# Get the current branch name
currentBranch=$(git rev-parse --abbrev-ref HEAD)
if [ -z "$currentBranch" ]; then
  echo "Could not determine the current branch. Exiting."
  exit 1
fi
echo "Current branch: $currentBranch"

# If no commit message is provided, prompt the user to enter one
if [ -z "$commitMessage" ]; then
  read -p "Enter commit message: " commitMessage
fi

# Stage all changes
echo "Staging all changes..."
git add -A

# Check if there are any changes to commit
if git diff --cached --quiet; then
  echo "No changes to commit."
else
  echo "Committing changes with message: $commitMessage"
  git commit -m "$commitMessage"
fi

# Get all remote names
remotes=$(git remote)
if [ -z "$remotes" ]; then
  echo "No remotes found. Exiting."
  exit 1
else
  echo "Found the following remotes: $remotes"
fi

# Push to each remote on the current branch
for remote in $remotes; do
  echo "Pushing to remote: $remote on branch: $currentBranch"
  git push "$remote" "$currentBranch"
done

echo "Commit and push operation completed."
