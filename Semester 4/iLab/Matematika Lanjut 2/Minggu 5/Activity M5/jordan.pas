Program GaussJordan;
{statement di bawah ini digunakan untuk menginput persamaan linier}

const MAXX = 3;
const MAXEQNS = MAXX;
var a : array[1..MAXEQNS,1..MAXX+1] of real;
  x : array[1..MAXX] of real;
  i,j,k : integer;
  temp : real;
    
begin
  for i:=1 to MAXEQNS do
  begin
    for j := 1 to MAXX do
    begin
      write('Masukkan a',i,j,' = ');
      readln(a[i,j]);
    end;
    write('Masukkan hasil dari persamaan',i,' = ');
    readln(a[i,MAXX+1]);
  end;

  {perintah ini digunakan untuk pencetakan persamaan dari variable yang telah diinput sebelumnya}
  readln;
  Writeln('Persamaannya adalah  :  ');
  for I := 1 to MAXEQNS do
  begin
    for j := 1 to MAXX do
    begin
      write(a[i,j]:2:2,' x',j);
      if j < MAXX then write(' + ')
    end;
    writeln(' = ',a[i,MAXX+1]:2:2);
  end;

  {statement di bawah ini digunakan untuk melakukan proses pencarian x1,x2 dan x3}
  for i:=1 to MAXEQNS-1 do
    for j := i+1 to MAXEQNS do
    begin
      temp:=a[j,i];
      for k:=1 to MAXX+1 do
      a[j,k]:=a[j,k] - temp*a[i,k]/a[i,i]
    end;

  x[MAXEQNS] := a[MAXEQNS,MAXX+1] / a[MAXEQNS,MAXX];
  for i:=MAXEQNS downto 1 do
  begin
    x[i]:=a[i,MAXX+1];
    for j:=i+1 to MAXX do
      begin
        x[i]:=x[i] - a[i,j]*x[j]
      end;
    x[i]:=x[i]/a[i,i];
  end;

  {statement di bawah ini digunakan  untuk mencetak hasil x1,x2, dan x3}
  writeln;
  for i:=1 to MAXX do
    write('x',i,' = ',x[i]:2:2,'  ');
  readln;
end.
