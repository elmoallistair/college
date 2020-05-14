program linier;
var
  x0, y0, x1, y1, x, f01, p: real;
  
begin
  write('Input data x[0] = ');readln(x0);
  write('Input data y[0] = ');readln(y0);
  write('Input data x[1] = ');readln(x1);
  write('Input data y[1] = ');readln(y1);
  writeln;
  write('Input x = ');readln(x);
  f01 := (y1-y0)/(x1-x0);
  p := y0+(x-x0)*f01; 
  writeln('Hasil Perhitungan P(x) = ',p:5:5);
  readln;
  end.
end;
