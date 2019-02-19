ldapsearch -LLL "(sn=*bon*)" sn | grep -v -e '^$' | grep -v -e 'uid' | wc -l | tr -d " "
