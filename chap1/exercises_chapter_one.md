Sean McKinley
Practice

1.1
	i. assignment
	ii. dereferencing
	iii. increment
	iv. decrement
	v. addition/subtraction

1.2
	a. Code is legal
	b. The values of *ptr and **ptrPtr are identical, initialized to the value contained in a. a is equal to 0 after declaration. 
	c. *ptrPtr = &b; 
	d. ptrPtr = ptr is not legal because the types are incompatible.
	
1.3
	a. In the event that x is not a pointer, *&x will always evaluate to x.
	It does not make sense to apply 
	b. In the event that x is a pointer, &*x will always evaluate to x. 

1.4
	a. address pointed to by ptr
	b. 5
	c. illegal expression comparing ptr and int.
	d. 1
	e. address of ptr. 
	f. illegal indirection operator applied to integer. 
	g. 5
	h. 5

1.5 
	a. structure with integer and structure pointer data members.
	b. object z of type S
	c. pointer x to object of type S
	d. vector of 10 S elements
	e. vector of 10 pointer to S elements	
	f. int
	g. pointer
	h. int
	i. pointer
	j. indirection must be applied to pointer, this expression is illegal
	k. indirection must be applied to pointer, this expression is illegal
	l. pointer - pointer is valid
	m. illegal, vector has no member a
	n. S object
	o. int 
	p. pointer
	q. ptr to S object
	r. S object
	s. int
	t. pointer
	u. illegal, u has no eleventh element. 