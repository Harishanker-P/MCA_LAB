<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PRODUCTS</title>
  
    <style>
        body {
            color: b;
            background: rgb(63, 94, 251);
            background: radial-gradient(circle, rgba(63, 94, 251, 1) 0%, rgba(70, 252, 167, 0.711922268907563) 100%);
        }

        .con {
            height: 90vh;
            display: flex;
            flex-direction: column;
            justify-content: center;
            align-items: center;

        }

        .con2 {
            /* border: 1px solid red; */
            border-radius: 20px;
            background-color: rgba(0, 195, 255, 0.441);
            padding: 50px;
            -webkit-box-shadow: 9px 11px 17px 0px rgba(0, 0, 0, 0.75);
            -moz-box-shadow: 9px 11px 17px 0px rgba(0, 0, 0, 0.75);
            box-shadow: 9px 11px 17px 0px rgba(0, 0, 0, 0.75);

        }

        ul {

            line-height: 50px;
           
        }

        li {
            list-style-type: none;
             display:flex;
            flex-direction:row;
            justify-content: space-between;
        align-items: center;
        }

        a:hover {
            color: red;
            
        }
    </style>
</head>

<body>

    <?php
     if(isset($_GET['editBtn']))
     {
         $con=new mysqli('localhost','root','','PRODUCTS');
       
        if($con->connect_error)
        {
            die("failed to connect to the database!!!");
        }
        else{
            
            $id=$_GET['editBtn'];
            $q="SELECT * FROM `poduct_details` where $id";
           
            
                $res=$con->query($q)->fetch_assoc();

                $name=$res['name'];
                $qty=$res['qty'];
                $unit_price=$res['unit_price'];

        }

     }
    ?>
    <div class="con">
        <div class="con2">
            <h2><u>UPDATE PRODUCT</u></h2>
            <form action="up.php" method="post">

            <ul>
                <li><label for="">NAME: </label> <input type="text" <?php echo"value=$name";?> required name="name"></li>
                <li><label for="">QTY: </label>  <input type="number" <?php echo"value=$qty";?> required name="qty"></li>
                <li><label for="">PRICE: </label> <input type="number" <?php echo"value=$unit_price";?>  required  name="price"></li>
            </ul>
            <center><button type="submit" <?php echo "value=$id;" ?> name="update">Update</button></center>
            </form>
        </div>
    </div>
  
</body>


</html>

