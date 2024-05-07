declare 
    i number;
    n number :=&n;
    fact number:=1;
begin
    if n>0
    then   
        for i in 1..n 
        loop    
            fact:=fact*i;
        end loop;
        dbms_output.put_line('fact '|| fact);
    else
        dbms_output.put_line('enter a valid number');
    end if;
end;
/
