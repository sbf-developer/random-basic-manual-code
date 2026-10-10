const readline = require("readline-sync");

const num1 = Number(readline.question("Enter the first number: "));
const num2 = Number(readline.question("Enter the second number: "));
const operator = readline.question("Enter the operator: ");

let result;
if (operator === "+") {
    result = num1 + num2;
} else if (operator === "-") {
    result = num1 - num2;
} else if (operator === "*") {
    result = num1 * num2;
} else if (operator === "/") {
    result = num1 / num2;
} else {
    console.log("Invalid operator");
}
console.log(result);