<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PRODUCTS</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-T3c6CoIi6uLrA9TneNEoa7RxnatzjcDSCmG1MXxSR1GAsXEV/Dwwykc2MPK8M2HN" crossorigin="anonymous">
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

        a {
            color: lime;
            text-decoration: none;
        }

        a:hover {
            color: red;
            
        }
    </style>
</head>

<body>

    <?php
     include('db.php');
    ?>
    <div class="con">
        <div class="con2">
            <h2><u>ALL PRODUCTS</u></h2>
            <?php
            
                $con=new mysqli('localhost','root','','PRODUCTS');
                $q="SELECT * FROM `poduct_details`";
                $products=$con->query($q);
                while($row=$products->fetch_assoc())
                {
                    echo "
                    
                    <table class='table table-striped'>

                    <tr>
  <td class='table-primary'>...</td>
  
</tr>
                    ...
                  </table>
                    
                    ";
                }
                
                if(1)
                {


                }
                else
                {
                    echo "something went wrong!!!! : $con->error";
                }
                
            ?>
            
        </div>
    </div>

</body>
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/js/bootstrap.bundle.min.js" integrity="sha384-C6RzsynM9kWDrMNeT87bh95OGNyZPhcTNXj1NW7RuBCsyN/o0jlpcV8Qyq46cDfL" crossorigin="anonymous"></script>

</html>