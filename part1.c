#include <linux/sched.h>
#include <linux/kernel.h>
#include <linux/module.h>

struct task_struct *task;

int simple_init(void) {
	printk(KERN_INFO "Loading Module\n");
	for_each_process(task) {
		printk("process name: %s, pid: %d, state: %ld\n", task->comm, task->pid, task->state);

	}
	return 0;
}

void simple_exit(void) {
	printk(KERN_INFO "Removing Module\n");
}

module_init(simple_init);
module_exit(simple_exit);

// name, state, pid of all processes

