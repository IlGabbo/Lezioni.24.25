param(
  [string]$commitMessage
)

# Check if the current directory is a git repository
if (!(git rev-parse --is-inside-work-tree 2>$null)) {
  Write-Output "Not a git repository. Please navigate to a git repository."
  exit 1
}

# Get the current branch name
$currentBranch = git rev-parse --abbrev-ref HEAD
if (!$currentBranch) {
  Write-Output "Could not determine the current branch. Exiting."
  exit 1
}
Write-Output "Current branch: $currentBranch"

# If no commit message is provided, prompt the user to enter one
if (-not $commitMessage) {
  $commitMessage = Read-Host -Prompt "Enter commit message"
}

# Stage all changes
Write-Output "Staging all changes..."
git add -A

# Commit the changes if there are any
if (git diff --cached --quiet) {
  Write-Output "No changes to commit."
} else {
  Write-Output "Committing changes with message: $commitMessage"
  git commit -m $commitMessage
}

# Get all remote names
$remotes = git remote
if ($remotes) {
  Write-Output "Found the following remotes: $remotes"
} else {
  Write-Output "No remotes found. Exiting."
  exit 1
}

# Push to each remote on the current branch
foreach ($remote in $remotes) {
  Write-Output "Pushing to remote: $remote on branch: $currentBranch"
  git push $remote $currentBranch
}

Write-Output "Commit and push operation completed."
