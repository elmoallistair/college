Program Metdua;
const epsilon=0.00001;

var
    a, b, c, fa, fb, fc : real;

begin
    writeln('Mencari akar dari persamaan f(x)=(x^3 + 1)/3');
    writeln('Dengan Metode Bagi Dua');
    writeln('====================================');
    write('Masukkan batas awal(a) : '); readln(a);
    fa := (sqr(a)*a + 1)/3;
    writeln('f(a) = ', fa:0:5);
    
    {perintah di bawah ini digunakan untuk mencari nilai fb, fa*fb, fc yang kemudian dicari akar persamaannya}

    repeat
        write('Masukkan batas akhir(b) : '); readln(b);
        fb := (sqr(b)*b+1)/3;
        writeln('f(b) = ',fb:0:5);
        if fa*fb < 0 then
            begin
                writeln('Syarat OK (f(a)*f(b) < 0)');
                writeln('f(a)*f(b) = ',(fa*fb):0:5);
            end
        else
            begin
                write('Batas / selang tidak memenuhi syarat (f(a)*f(b)  <  0)');
                writeln('f(a)*f(b)  =  ',(fa*fb):0:5);
            end
    until fa*fb  <  0;
    
    repeat
        c := (a+b)/2;
        fc := (sqr(c)*c+1)/3;
        if fa*fc < 0 then
            b:=c
        else
            a:=c;
    until abs(b-a) < epsilon;

    writeln('Nilai akar persamaannya adalah :  ', c:0:5);
    readln;
end.