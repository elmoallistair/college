Program Gauss;

type
    matrix = array[1..25,1..25] of real;

var
   n,i,j : integer;
   a,b,c : matrix;

procedure bacadata(var y:matrix);
    begin
    for j := 1 to n do
        begin
            for i := 1 to n do 
            begin
                write ('a',i,j,' =  ');
                readln(y[i,j]);
            end;
        end;
    end;

procedure tulisdata(y : matrix);
    begin
    for i := 1 to n do
        begin
            for j := 1 to n do
            write(y[i,j]:8:2);
            writeln;
        end;
        writeln;
    end;

{statement di bawah ini merupakan blok program utama}

Begin
    writeln ('mencari det matrik menggunakan metode eliminasi gauss');
    writeln('---------------------------------------------------');
    writeln('masukan ordo matrix yang diinginkan(nxn)');
    write('ordo matrik  :  '); readln(n);
    bacadata(a);
    writeln('matrik yang dimasukan :  ');
    tulisdata(a);
    writeln('matrik yang dimasukan : ');
    bacadata(b);
    tulisdata(b);
    readln
end.