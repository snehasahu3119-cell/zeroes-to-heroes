let number = "10";

number = Number(number);

if (Number.isNaN(number)) {
  console.log("Invalid number");
} else if (number % 2 === 0) {
  console.log("Even");
} else {
  console.log("Odd");
}
