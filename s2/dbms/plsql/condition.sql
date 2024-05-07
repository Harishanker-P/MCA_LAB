declare
    row1 class%rowtype;
begin
    select id,name into row1 from class where id=2;
        -- dbms_output.put_line('name' || row1.name);
    if row1.id=1 then
        dbms_output.put_line('name '||row1.name);
    elsif row1.id=2 then
        dbms_output.put_line('id name:' ||row1.name);
        dbms_output.put_line('name '||row1.name);
    else 
        dbms_output.put_line('name2 '||row1.name);
    end if;

end;
/