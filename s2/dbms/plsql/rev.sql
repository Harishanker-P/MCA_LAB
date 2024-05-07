declare 
    str varchar2(20):='&str';
    rev varchar2(20);
    len number;
begin
    len:=length(str);
    for i in reverse 1..len loop
        rev:=rev||substr(str,i,1);
    end loop;
    dbms_output.put_line(rev);

end;
/

