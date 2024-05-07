declare 
    i number:=1;
    
begin
    dbms_output.put_line(i);
    loop 
        dbms_output.put_line(i);
        i:=i+1;
        exit when i>10;
    end loop;
    while i<=20 loop
        dbms_output.put_line(i);
        i:=i+1;
    end loop;
    for i in reverse 1..20 loop
        dbms_output.put_line(i);
    end loop;


end;
/