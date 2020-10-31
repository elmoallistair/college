# LOGIN
sqlcmd -S localhost -U SA -P '<PASS>'

# INSERT
sqlcmd -S localhost -U SA -P '<PASS>' -i Table.sql -o test_output.txt
