rm a.out
rm -rf filler.dSYM*
rm src/.DS_Store
rm .DS_Store
make fclean
git add .
git commit -m "${1}"
git push origin master

echo "
Commit message: ${1}
"
