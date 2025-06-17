// const countDown = (num) => {
//     for (i = num; i > 0; i--) {
//         console.log(i);
//     }
//     console.log("All Done!")
// }

// countDown(5);

const countDown = (num) => {
    if (num <= 0) {
        console.log("All Done!");
        return;
    }
    console.log(num);
    num--;
    countDown(num);
}