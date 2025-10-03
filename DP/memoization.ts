function fib(num, memo=[]) {
	// recursion + memoization to store previous values and retrieve them later
	if (num == 1 || num == 2) return 1;
	if (memo[n] != undefined) return memo[n];
	let result = fib(n - 1, memo) + fib(n - 2, memo);
	memo[n] = result;
	return result;
}
