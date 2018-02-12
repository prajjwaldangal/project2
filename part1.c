#include <linux/sched.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/list.h>

struct task_struct *task;
struct list_head *list;

int simple_init(void) {
	printk(KERN_INFO "Loading Module\n");
	for_each_process(task) {
	printk("process name: %s, pid: %d, state: %ld, parent pid: %d\n", task->comm, task->pid, task->state, task->real_parent->pid);
	}
	return 0;
}

void simple_exit(void) {
	printk(KERN_INFO "Removing Module\n");
}

module_init(simple_init);
module_exit(simple_exit);

