declare
    ch number(1);
    
begin
    ch:=&ch;
    case ch
        when 1 then 
           dbms_output.put_line('option 1');
        else 
           dbms_output.put_line('else');
    end case;
end;
/