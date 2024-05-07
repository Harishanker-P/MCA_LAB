declare
    n number := &n;
    i number;
begin
    if n<=0 then
        dbms_output.put_line('number zero or negative');
    elsif n mod 2=0 then
        dbms_output.put_line('even');
    else    
        dbms_output.put_line('odd');
    end if;
end;
/
