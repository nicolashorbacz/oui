cat passwd | grep "/bin/shells/etna" | cut -d':' -f1 | sed -n '2,$p'| sed -n '1~2p' | rev | sort -r | sed -n "$MY_LINE1, $MY_LINE2 p" | tr "\n" "," | sed s/,$/.\\n/
