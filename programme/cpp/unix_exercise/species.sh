# separate the species in a list
# usage: bash species.sh

for file in $@
do 
  echo "Unique species in $file:"
  # extract species names
  cut -d, -f 2 $file | sort | uniq
done
