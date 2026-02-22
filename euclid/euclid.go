package main

import "fmt"

type Euclid struct {
	r int
}

func (e Euclid) solve(m, n int) int {
	// E0
	if n > m {
		t := m
		m = n
		n = t
	}

	// E1
	r := m % n

	// E2
	if r == 0 {
		return n
	}

	// E3
	return e.solve(n, r)
}

func main() {
	e := Euclid{r: 0}
	fmt.Println(e.solve(544, 119))
}
