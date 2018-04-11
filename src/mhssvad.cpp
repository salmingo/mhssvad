/*!
 * mhssvad -- Multi-host Single Software Version Automatic Dispatcher
 *            多主机单软件版本自动分发
 * 在GWAC系统中, 相机控制软件、文件服务软件部署在多台主机上. 在不同主机上的软件,
 * 仅在配置文件中存在差异. 更新软件流程繁杂:
 * (1) 编译生成可执行程序
 * (2) 上传程序至主机
 * (3) 登录主机
 * (4) 退出当前驻留程序
 * (5) 拷贝覆盖程序
 * (6) 重新启动程序
 * (7) 检查确认程序正确启动
 * (8) 重复步骤(2)-(7), 直至遍历所有主机
 *
 * mhssvau和mhssvad配合, 自动完成上述工作流程, 以节约人工操作时间, 并避免失误
 *
 * @version 0.1
 * @date   2018年4月11日
 * @author 卢晓猛
 * @email  lxm@nao.cas.cn
 */

int main(void) {

	return 0;
}
