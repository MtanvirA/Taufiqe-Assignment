<h1 align="center">🔢 Matrix Inversion using Recursion in C</h1>

<p align="center">
  A C program that calculates the Determinant, Cofactor Matrix,
  Adjoint Matrix and Inverse Matrix of an n × n square matrix.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg">
  <img src="https://img.shields.io/badge/Concept-Recursion-green.svg">
  <img src="https://img.shields.io/badge/Math-Linear%20Algebra-orange.svg">
  <img src="https://img.shields.io/badge/Status-Completed-brightgreen.svg">
</p>

---

## 📖 About The Project

This project implements matrix inversion from scratch using the mathematical definitions of:

- Determinants
- Minors
- Cofactors
- Adjoint Matrix
- Inverse Matrix

The determinant is calculated recursively using Laplace Expansion.

The primary goal of this project is educational: understanding how matrix operations work internally rather than relying on external libraries.

---

## ✨ Features

✅ User-defined matrix dimension

✅ Recursive determinant calculation

✅ Cofactor matrix generation

✅ Adjoint matrix generation

✅ Inverse matrix generation

✅ Handles singular matrices

✅ Handles 1×1 matrices

✅ Input validation

---

## 🧠 Working Principle

The program follows the standard mathematical approach:

```text
Input Matrix
      │
      ▼
Determinant
      │
      ▼
Cofactor Matrix
      │
      ▼
Adjoint Matrix
      │
      ▼
Inverse Matrix
```

The inverse is calculated using:

```text
A⁻¹ = Adj(A) / det(A)
```

where:

- det(A) = Determinant of Matrix A
- Adj(A) = Adjoint of Matrix A

---

## 🔄 Recursive Determinant Calculation

The determinant is calculated using Laplace Expansion.

For an n × n matrix:

```text
det(A)
=
Σ (-1)^(i+j) × element × determinant(minor)
```

### Base Cases

#### 1 × 1 Matrix

```text
[a]
```

```text
det(A) = a
```

#### 2 × 2 Matrix

```text
|a b|
|c d|
```

```text
det(A) = ad - bc
```

---

## 📂 Project Structure

```text
Matrix-Inversion.c

├── inputMatrix()
├── printMatrix()
├── printIMatrix()
├── mini()
├── determinant()
├── cofactor()
├── adjoint()
├── inverseM()
└── main()
```

---

## 🚀 Compilation

Using GCC:

```bash
gcc Matrix-Inversion.c -o Matrix-Inversion
```

---

## ▶️ Running the Program

### Windows

```bash
Matrix-Inversion.exe
```

### Linux / macOS

```bash
./Matrix-Inversion
```

---

## 🧪 Example

### Input

```text
3

1 2 3
0 1 4
5 6 0
```

### Output

```text
The determinant: 1

The cofactor matrix:
-24 20 -5
18 -15 4
5 -4 1

The adjoint matrix:
-24 18 5
20 -15 -4
-5 4 1

The inverse matrix:
-24.00 18.00 5.00
20.00 -15.00 -4.00
-5.00 4.00 1.00
```

---

## ⚠️ Limitations

- Recursive determinant calculation becomes expensive for large matrices.
- Intended for educational purposes.
- Not optimized for large-scale numerical computations.

---

## 📚 Concepts Practiced

- Recursion
- Functions
- Variable Length Arrays (VLA)
- Matrix Algebra
- Determinants
- Cofactors
- Adjoint Matrix
- Matrix Inversion
- Modular Programming

---

## 👨‍💻 Author

**Md. Tanvir Anjum**

Computer Science & Engineering  
Patuakhali Science and Technology University

GitHub:
https://github.com/MtanvirA

---

<p align="center">
⭐ If you found this project useful, consider starring the repository.
</p>