declare
    i number:=1;
    pi constant number:=3.14;
    area number;
begin
    for i in 1..3 loop
        area:=pi * power(i,2);
        dbms_output.put_line('area '||area);
    end loop;
end;
/