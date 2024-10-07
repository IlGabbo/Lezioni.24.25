#!/bin/bash

# Nome del ramo da pullare
BRANCH="main"

# Nome dei remoti
REMOTES=("gitea" "github")

# Esegui git pull per ogni remoto
for remote in "${REMOTES[@]}"
do
    echo "Pulling from $remote..."
    git pull $remote $BRANCH
done
