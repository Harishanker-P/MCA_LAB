declare
    id_ class.id%Type;
    row class%rowtype;
    name1 varchar2(20);
begin 
    select id,name into id_,name1 from class where id=2;
    dbms_output.put_line('id:'||id_);
    dbms_output.put_line('name:'||name1);

    name1:='harishanker';
    update class set name=name1 where id=2;

    select * into row from class where id=2;

    dbms_output.put_line(row.name);
end;
/
    
