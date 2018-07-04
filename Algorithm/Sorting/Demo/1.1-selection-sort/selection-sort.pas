program selection_sort;

var a: array[1..1000] of integer;
    n, i: integer;

procedure swap(var a, b: integer);
var tmp: integer;
begin
    tmp := a;
    a := b;
    b := tmp;
end;

procedure selection_sort(var a: array of integer; n: integer);
var i, j, idx_min_from_i: integer;
begin
    for i:=0 to n-2 do
    begin
        idx_min_from_i := i;

        for j:=i+1 to n-1 do
            if (a[j] < a[idx_min_from_i]) then
                idx_min_from_i := j;

        if (idx_min_from_i <> i) then
            swap(a[i], a[idx_min_from_i]);
    end;
end;

begin
    readln(n);
    for i:=1 to n do read(a[i]);
    
    selection_sort(a, n);
    
    for i:=1 to n do write(a[i], ' '); writeln;
end.
