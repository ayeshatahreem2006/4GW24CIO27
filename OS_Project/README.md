# Memory Allocation Techniques Simulator (C)

This project is a **C-based simulator** that demonstrates three classic **memory allocation techniques** used in operating systems:

- **First Fit**
- **Best Fit**
- **Worst Fit**

The program allocates processes to fixed-size memory blocks and calculates **internal fragmentation** for each allocation strategy.

---

##  Features

- Simulates **First Fit**, **Best Fit**, and **Worst Fit** allocation algorithms
- Displays:
  - Process ID
  - Process size
  - Allocated block number
  - Block size
  - Internal fragmentation
- Calculates:
  - Total internal fragmentation
  - Number of successfully allocated processes
- Resets memory and processes before each algorithm for fair comparison

---

##  Concepts Covered

- Memory management in operating systems
- Fixed partition allocation
- Internal fragmentation
- Allocation strategy comparison

---


## How the Program Works

User inputs:

Number of memory blocks

Size of each block

Number of processes

Size of each process

The program runs:

First Fit allocation

Best Fit allocation

Worst Fit allocation

For each strategy:

Memory is reset

Processes are allocated

Results are displayed in tabular format
---
Compilation and Execution
gcc memory_allocation.c -o memory_allocation

Run
./memory_allocation

---


Sample Output


<img width="542" height="392" alt="Screenshot 2026-01-07 144845" src="https://github.com/user-attachments/assets/56a2084b-e53d-4f34-9d13-43a9daf26a0c" />

## Notes

Maximum supported blocks and processes: 10

Memory blocks are treated as fixed-size partitions

External fragmentation is not simulated

 ## Use Cases

Operating Systems laboratory experiments

Understanding memory allocation strategies

Comparing allocation efficiency

## License

 This project is intended for educational use.
---

## Contact & Profiles
## Member 1
Email: ayeshatahreem193@gmail.com

LinkedIn: www.linkedin.com/in/ayesha-tahreem-63190a337

GitHub: https://github.com/ayeshatahreem2006

## Member 2
Email: sanjanagrao.mys06@gmail.com

LinkedIn: www.linkedin.com/in/sanjana-g-rao-537839366

GitHub: https://github.com/sanjanagraomys06-rgb
## Author

Developed as part of an Operating Systems memory management simulation.
