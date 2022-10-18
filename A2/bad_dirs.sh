#!/bin/bash
#
# bad_dirs.sh: List incorrectly named directories

# list directories with spaces
chmod u+x *sh
spaces=$(find . -maxdepth 1 -type d -regex '.* .*' -print | sort)
if [[ -n $spaces ]]; then
  echo "Filenames with spaces:"
  echo "$spaces"
fi

unusual_symbol=$(find . -maxdepth 1 -type d -regex '\./.*[^0-9A-Za-z_-].*' -print | sort)
if [[ -n $spaces ]]; then
  echo "Filenames with unusual symbols:"
  echo "$unusual_symbols"
fi

missing_=$(find . -maxdepth 1 -type d -regex '.*[a-z][A-Z].*' -print | sort)
if [[ -n $spaces ]]; then
  echo "Filenames with missing underscore:"
  echo "$missing_"
fi

needs_fixing=$(find . -maxdepth 1 -type d -regex '\./.*[^0-9A-Za-z_-].*' -print | sort)
if [[ -n $spaces ]]; then
  echo "Filenames that need fixing:"
  echo "$needs_fixing"
fi