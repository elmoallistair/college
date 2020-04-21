Program segitiga;

var
	a,t,l,k,qr,s: real;

begin
	write ( 'Masukkan nilai alas = ' ) ;
	readln(a);
	writeln;
	write(' Masukkan nilai tinggi = ' );
	readln(t);
	writeln;
	l := 1/2*a*t;
	writeln(' Luas Segitiga = ',round(l));
	writeln;
	readln;
	s := sqr(a) + sqr(t);
	qr := sqrt(s);
	k := a+qr+t;
	writeln('Keliling segitiga = ',k:3:0);
	readln;
end.