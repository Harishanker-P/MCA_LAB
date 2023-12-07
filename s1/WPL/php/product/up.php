<?php
if(isset($_POST['update']))
{
    $id=$_POST['update'];
    $name=$_POST['name'];
    $qty=$_POST['qty'];
    $price=$_POST['price'];

       
    
        $con=new mysqli('localhost','root','','PRODUCTS');
        $q="UPDATE `poduct_details` SET `name` = '$name', `qty` = '$qty', `unit_price` = '$price' WHERE `poduct_details`.`id` = $id";
        if($con->query($q))
        {
              echo "<script>

                        alert('$name updated successfully');
                     </script>";
                     header('refresh:1,url=http://localhost/harishanker/MCA_LAB/s1/WPL/php/product/delete.php');
        }
        else{
            echo "failed to insert : $con->error";
        }
        
}


?>
 