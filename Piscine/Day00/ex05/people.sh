ldapsearch -QLLL "(uid=z*)" cn | sed -n "/cn:/p" | cut -c 5-
