var a:array [0..100000] of integer;
    i,x,n,m,y:longint;
begin
assign(input, 'input.txt'); reset(input);
assign(output, 'output.txt'); rewrite(output);
read(n,m);
for i:=1 to n do
begin
  read(x);
  a[x]:=1;
end;
for i:=1 to m do
begin
  read(y);
  if a[y]=1 then a[y]:=2;
end;
for i:=0 to 100000 do
  if a[i]=2 then write(i,' ');
end. 