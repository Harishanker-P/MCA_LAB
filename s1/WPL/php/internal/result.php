<?php
    echo "<center><h2><u>RESULTS</u></h2></center>";
    $data=array(
        "057"=>array("john"=>array("WPL"=>20,"PHP"=>30,"DS"=>40)),
        "058"=>array("tom"=>array("WPL"=>50,"PHP"=>48,"DS"=>44))
        );
  

   if(isset($_POST['submit']))
   {
    $sName=$_POST['sName'];
    $sReg=$_POST['sReg'];
    $total=0;
    $fail=0;

    if(array_key_exists($sReg,$data))
    {
        if(array_key_exists($sName,$data[$sReg]))
        {
          
            echo "
            <center>
            <table border='1'>
                <tr>
                    <th>SUBJECT</th>
                    <th>MARK</th>
                    <th>STATUS</th>
                   
                </tr>
               
                ";

               
            foreach($data[$sReg][$sName] as $sub => $mark)
            {
                $total+=$mark;
            echo "
                 <tr>
                    <td>{$sub}</td>
                    <td>{$mark}</td>
                   
                ";
                if($mark<24)
                {
                    $fail=1;
                    echo "
                    <td style='color:red;'>FAIL</td>
                    </tr>
                    ";
                }
                else
                {
                    echo "
                    <td style='color:green ;'>PASS</td>
                    </tr>
                    ";
                }
                
                  
                
                
                
            }
            echo "
                    <tr>
                        
                        <td><b>TOTAL:</b> </td>
                        <td>{$total}</td>
                        ";

                        if($fail==1)
                        {
                            echo "
                            <td style='color:red;'>FAIL</td>
                            </tr>
                            ";
                        }
                        else{
                            echo "
                            <td style='color:green;'>PASS</td>
                            </tr>
                            ";
                        }

           echo " </table>
    
        </center>
            ";
        }
        else{
            echo "<center ><h3 style='color:red;margin-top:50px;'>INVALID NAME</h3></center>";
        }
    }
    else
    {
        echo "<center ><h3 style='color:red;margin-top:50px;'>INVALID REGISTER NUMBER</h3></center>";
    }
   }


?>