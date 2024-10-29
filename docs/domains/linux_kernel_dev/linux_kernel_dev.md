# Linux Kernel Development

This is a comprehensive resource guide for getting into Linux Kernel development. It is structured in phases, from building foundational knowledge to contributing patches to the kernel, with practical resources and tips along the way.

---

## Phase 1: Understand Operating Systems and the Linux Kernel

Before diving into actual development, it's good to have a solid understanding of Operating Systems and the Linux Kernel, its structure, and the ecosystem around it. However, do not waste too much time reading theory. Once you have a handle of the basics, jump into phase 2.

### Key Concepts to Learn

- Operating Systems: Learn the basics, including processes, memory management, and filesystems.
- C Programming: The Linux Kernel is written in C, so proficiency in C is essential.
- Linux Command Line: Learn how to navigate, compile, and troubleshoot in the terminal. This can be developed easily by simply using a Linux Distro as your daily driver.

### Recommended Reading

1. Operating System Concepts by `Abraham Silberschatz, Peter B. Galvin, and Greg Gagne`: This is a fairly long book, a shorter introduction to core OS concepts might be preferable in order to save time.
2. The C Programming Language by `Brian Kernighan and Dennis Ritchie` and/or [C Assignment](./c_assignment.md)

---

## Phase 2: Setup the Development Environment

Having a proper development setup is essential. You’ll need to be comfortable with compiling, testing, and debugging kernels. The [LFD103 course](https://training.linuxfoundation.org/training/a-beginners-guide-to-linux-kernel-development-lfd103/))provides a well structured start to making and submitting patches. On the way you'll need to know the following essentials:

* An editor, preferably something lightweight like `vim` or it's variants, or `emacs`.
* A VM, try `QEMU with KVM` or `VirtualBox`.
* Git 

## Phase 3: Start Contributing to the Linux Kernel

### Find Your First Patch:

1. **Explore Kernel Bug Trackers**:
   - Check [Bugzilla for the Linux Kernel](https://bugzilla.kernel.org/) for beginner-friendly bugs to fix.

2. **Read Kernel Mailing Lists (LKML)**:
  - Subscribing and reading discussions on LKML will help you learn from others and understand the kernel’s patch submission process.

4. **Kernel Newbies’ List of Small Tasks**: Focus on [small tasks](https://kernelnewbies.org/FirstKernelPatch) to gain initial experience.

### How to Submit Patches:

Once you've identified a small bug or improvement, the next step is to submit your first patch.

1. **Follow the Linux Kernel Patch Submission Process**:
   - Learn how to use `git format-patch` and `git send-email` to format your patches correctly.
   - Follow the **kernel coding style guidelines** (`scripts/checkpatch.pl` can help check your code).

2. **Use Mailing Lists**: 
   - Submit patches to the appropriate kernel mailing list and be prepared to respond to feedback.

### Resources:
- [Kernel Contributor Guide](https://javiercarrascocruz.github.io/kernel-contributor-1): A detailed guide on the patch submission process.

- [Nick Desaulniers' Blog on Submitting Your First Patch](https://nickdesaulniers.github.io/blog/2017/05/16/submitting-your-first-patch-to-the-linux-kernel-and-responding-to-feedback/): Steps for submitting your first patch and responding to feedback.
