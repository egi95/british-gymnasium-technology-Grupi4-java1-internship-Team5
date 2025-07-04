git init
echo "Emri: Jora Gashi\nData: 2 Korrik 2025" > README.md
touch program.c
git add README.md program.c
git commit -m "Initial commit"
git switch -c development
# (ndrysho program.c)
git add program.c
git commit -m "Shtuar mesazh për degën development"
