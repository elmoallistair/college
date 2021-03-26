Program Iterasi;

Var 
   x0,xb,tol    : real; 
   max_iter,it  : integer; 
   epsilon      : real; 

function g(x : real) : real;
   begin
      g := (sqr(x) + exp(x) - 2)/3;
   end;

Begin 
   write('Harga awal              = '); readln(x0); 
   write('Toleransi               = '); readln(tol); 
   write('Jumlah iterasi maksimum = '); readln(max_iter); 
   it := 0; 
   writeln('It.     x        g(x)      f(x)'); 
   epsilon := tol+1; 
   while((it <= max_iter) and (epsilon > tol)) do 
      Begin 
         it := it + 1; 
         xb := g(x0); 
         epsilon := abs(xb-x0); 
         writeln(it:3,'  ',x0:8:5,'  ',xb:8:5,'  ',epsilon:8:5);
         x0 := xb; 
      End;
       
   {perintah ini digunakan untuk melakukan seleksi kondisi}
   if(it<=max_iter) Then
      Begin
         writeln('Toleransi terpenuhi');
         writeln('Hasil akhir = ',xb:9:7);
      End
   else 
      writeln('Toleransi tidak terpenuhi');
   
   readln;
end.