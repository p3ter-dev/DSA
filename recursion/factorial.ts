// function factorial(num) {
//     let total = 1;
//     for (i = num; i > 1; i--) {
//         total *= i;
//     }
//     return total
// }
// let result = factorial(3);
// console.log(result);

function factorial(num) {
    if (num === 1) return 1;
    return num * factorial(num - 1);
}
let result = factorial(3);
console.log(result);