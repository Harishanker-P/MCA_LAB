declare 
    pi constant number:= 3.14;
    r number := 2;
    area number;
begin
    area:= pi * power(r,2);
    dbms_output.put_line('ARea is: ' || area);
end;
/
