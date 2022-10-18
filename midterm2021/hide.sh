file=$1
mv $file .$file
chmod a-rwx $file
chmod u+r $file