<?php
$con=new mysqli('localhost','root','');
if($con->connect_error)
{
    die("Failed to connect to the server");
}
else{
    $con=new mysqli('localhost','root','','PRODUCTS');
    if(isset($_GET['delBtn']))
    {
        $id=$_GET['delBtn'];
        $q="DELETE FROM poduct_details WHERE `poduct_details`.`id` = $id";
        if($con->query($q))
        {
            echo "
            <script>
                alert('product delted!');
            </script>
            ";
            header('refresh:1,url=http://localhost/harishanker/MCA_LAB/s1/WPL/php/product/delete.php');
        }
    }
}

   

?>