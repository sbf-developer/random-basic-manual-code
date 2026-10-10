//Write a program to check if a number is positive, negative or zero.

const readline = require("readline-sync");

const number = Number(readline.question("Enter a number: "));

if (number > 0) {
    console.log("The number is positive");
} else if (number < 0) {
    console.log("The number is negative");
} else {
    console.log("The number is zero");
}
