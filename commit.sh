#!/bin/bash
NAME="Auto Committer 9000"

read -p "Commit message?: " message # Get commit message

# start the commit

git add .                    # adds all the files
git commit -m "\"$message\"" # commits with the message
git push origin main         # pushes to github

echo "Pushed succesfully :3"
