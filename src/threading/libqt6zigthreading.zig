const C = @import("qt6c");

/// https://doc.qt.io/qt-6/thread-basics.html
pub const Threading = struct {
    /// Direct execution in caller's thread (not thread-safe)
    ///
    /// This executes the callback immediately in the current
    /// thread which is not necessarily the main thread.
    ///
    /// https://doc.qt.io/qt-6/thread-basics.html
    ///
    /// ``` func: fn (self: ?*anyopaque, param: ?*anyopaque) callconv(.C) void ```
    pub fn ExecNow(self: ?*anyopaque, func: fn (?*anyopaque, ?*anyopaque) callconv(.C) void) void {
        C.Threading_ExecNow(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&func))));
    }

    /// Auto execution in main thread (thread-safe)
    ///
    /// If the signal is in the same thread as the receiver,
    /// this will be the same as `ExecNow`.
    ///
    /// If the signal is in a different thread, this will
    /// be the same as `Async`.
    ///
    /// https://doc.qt.io/qt-6/thread-basics.html
    ///
    /// ``` func: fn (self: ?*anyopaque, param: ?*anyopaque) callconv(.C) void ```
    pub fn Exec(self: ?*anyopaque, func: fn (?*anyopaque, ?*anyopaque) callconv(.C) void) void {
        C.Threading_Exec(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&func))));
    }

    /// Unique auto execution in main thread (thread-safe)
    ///
    /// This runs the callback only if it does not duplicate
    /// the signal emission.
    ///
    /// https://doc.qt.io/qt-6/thread-basics.html
    ///
    /// ``` func: fn (self: ?*anyopaque, param: ?*anyopaque) callconv(.C) void ```
    pub fn ExecUnique(self: ?*anyopaque, func: fn (?*anyopaque, ?*anyopaque) callconv(.C) void) void {
        C.Threading_ExecUnique(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&func))));
    }

    /// Single-shot execution in main thread (thread-safe)
    ///
    /// This runs the callback only once.
    ///
    /// https://doc.qt.io/qt-6/thread-basics.html
    ///
    /// ``` func: fn (self: ?*anyopaque, param: ?*anyopaque) callconv(.C) void ```
    pub fn ExecOnce(self: ?*anyopaque, func: fn (?*anyopaque, ?*anyopaque) callconv(.C) void) void {
        C.Threading_ExecOnce(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&func))));
    }

    /// Non-blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback in the main Qt thread.
    /// You should use this whenever you need to
    /// access the main Qt GUI from a non-GUI thread.
    ///
    /// https://doc.qt.io/qt-6/thread-basics.html
    ///
    /// ``` func: fn (self: ?*anyopaque, param: ?*anyopaque) callconv(.C) void ```
    pub fn Async(self: ?*anyopaque, func: fn (?*anyopaque, ?*anyopaque) callconv(.C) void) void {
        C.Threading_Async(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&func))));
    }

    /// Unique non-blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback only if it does not duplicate
    /// the signal emission.
    ///
    /// https://doc.qt.io/qt-6/thread-basics.html
    ///
    /// ``` func: fn (self: ?*anyopaque, param: ?*anyopaque) callconv(.C) void ```
    pub fn AsyncUnique(self: ?*anyopaque, func: fn (?*anyopaque, ?*anyopaque) callconv(.C) void) void {
        C.Threading_AsyncUnique(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&func))));
    }

    /// Single-shot non-blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback only once.
    ///
    /// https://doc.qt.io/qt-6/thread-basics.html
    ///
    /// ``` func: fn (self: ?*anyopaque, param: ?*anyopaque) callconv(.C) void ```
    pub fn AsyncOnce(self: ?*anyopaque, func: fn (?*anyopaque, ?*anyopaque) callconv(.C) void) void {
        C.Threading_AsyncOnce(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&func))));
    }

    /// Unique single-shot non-blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback only once if it does not duplicate
    /// the signal emission.
    ///
    /// https://doc.qt.io/qt-6/thread-basics.html
    ///
    /// ``` func: fn (self: ?*anyopaque, param: ?*anyopaque) callconv(.C) void ```
    pub fn AsyncUniqueOnce(self: ?*anyopaque, func: fn (?*anyopaque, ?*anyopaque) callconv(.C) void) void {
        C.Threading_AsyncUniqueOnce(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&func))));
    }

    /// Blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback in the main Qt thread.
    /// You should use this whenever you need to access
    /// the main Qt GUI from a non-GUI thread in a
    /// synchronous manner.
    ///
    /// Be careful with this, as it will block the main
    /// thread until the callback is finished. This has
    /// the risk of freezing the GUI or even causing
    /// potential deadlocks. If the slot function in the
    /// receiver tries to send a signal back to the
    /// emitting thread using a `BlockingQueuedConnection`,
    /// a deadlock can occur.
    ///
    /// This should only be used when you absolutely
    /// need to ensure synchronous execution of the
    /// callback.
    ///
    /// This is not recommended for most cases.
    ///
    /// https://doc.qt.io/qt-6/thread-basics.html
    ///
    /// ``` func: fn (self: ?*anyopaque, param: ?*anyopaque) callconv(.C) void ```
    pub fn Sync(self: ?*anyopaque, func: fn (?*anyopaque, ?*anyopaque) callconv(.C) void) void {
        C.Threading_Sync(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&func))));
    }

    /// Unique blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback only if it does not duplicate
    /// the signal emission. All of the cautions from `Sync`
    /// apply here as well.
    ///
    /// https://doc.qt.io/qt-6/thread-basics.html
    ///
    /// ``` func: fn (self: ?*anyopaque, param: ?*anyopaque) callconv(.C) void ```
    pub fn SyncUnique(self: ?*anyopaque, func: fn (?*anyopaque, ?*anyopaque) callconv(.C) void) void {
        C.Threading_SyncUnique(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&func))));
    }

    /// Single-shot blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback only once. All of the cautions from
    /// `Sync` apply here as well.
    ///
    /// https://doc.qt.io/qt-6/thread-basics.html
    ///
    /// ``` func: fn (self: ?*anyopaque, param: ?*anyopaque) callconv(.C) void ```
    pub fn SyncOnce(self: ?*anyopaque, func: fn (?*anyopaque, ?*anyopaque) callconv(.C) void) void {
        C.Threading_SyncOnce(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&func))));
    }

    /// Unique single-shot blocking execution in main thread (thread-safe)
    ///
    /// This runs the callback only once if it does not duplicate
    /// the signal emission. All of the cautions from `Sync` apply here
    /// as well.
    ///
    /// https://doc.qt.io/qt-6/thread-basics.html
    ///
    /// ``` func: fn (self: ?*anyopaque, param: ?*anyopaque) callconv(.C) void ```
    pub fn SyncUniqueOnce(self: ?*anyopaque, func: fn (?*anyopaque, ?*anyopaque) callconv(.C) void) void {
        C.Threading_SyncUniqueOnce(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&func))));
    }
};
