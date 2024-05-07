declare
    i number:=1;
    sq number;
begin
    for i in 1..10 loop 
        sq:=sq1(i);
        insert into sq values(i,sq);
    end loop;
end;
/


