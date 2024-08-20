# sort files by their length.
# usage: bash sorted.sh one_or_more_filenames
wc -l "$@" | sort -n
