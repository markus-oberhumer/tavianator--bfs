test "$SUDO" || skip
test "$UNAME" = "Linux" || skip

clean_scratch
"$XTOUCH" scratch/{file,null}
ln -s /dev/null scratch/link

sudo mount --bind /dev/null scratch/null
trap "sudo umount scratch/null" EXIT

bfs_diff -L scratch -type c
