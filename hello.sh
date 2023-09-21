#!/bin/bash

# Create an array of users
users=("User1" "User2" "User3")

# Loop through the array and print each user and greeting
for user in "${users[@]}"; do
    echo "User: $user"
done

# Print the common greeting
echo "Bash says: Hello, World!"
