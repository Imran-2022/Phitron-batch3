function handleDeposit(){
  var input_val=  document.getElementById("deposit-amount").value;
  var depositAmount= document.getElementById("deposit").innerText;
  
  console.log(parseInt(input_val)+parseInt(depositAmount));

  document.getElementById("deposit").innerText=parseInt(input_val)+parseInt(depositAmount);

  
}